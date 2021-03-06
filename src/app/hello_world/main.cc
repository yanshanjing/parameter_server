#include <iostream>
#include "ps.h"
#include "parameter/kv_vector.h"

namespace PS {
class HelloServer : public App {
 public:
  HelloServer() : App() { }
  virtual ~HelloServer() { }

  void init() {
    LL << myNodeID() << ", this is server " << myRank();

    // initial the weight at server
    model_ = new KVVector<uint64, float>("w");
    model_->key() = {0, 1, 2, 3, 4, 5};
    model_->value() = {.0, .1, .2, .3, .4, .5};
  }

 private:
  KVVector<uint64, float> *model_;
};
} // namespace PS


PS::App* CreateServer(const std::string& conf) {
  return new PS::HelloServer();
}

int PSMain(int argc, char *argv[]) {

  LL << PSNodeID() <<  ": this is worker " << PSRank();
  using namespace PS;
  KVVector<uint64, float> model("w");

  if (PSRank() == 0) {
    model.key() = {0, 2, 4, 5};
  } else {
    model.key() = {0, 1, 3, 4};
  }
  MessagePtr msg(new Message(kServerGroup));
  msg->key = model.key();
  int pull_time = model.pull(msg);

  model.waitOutMsg(kServerGroup, pull_time);
  LL << PSNodeID() << ": key: " << model.key()
         << "; value: " << model.value();
  return 0;
}
