// controllers/MainController.cc
#include <drogon/HttpController.h>
using namespace drogon;

class MainController : public drogon::HttpController<MainController> {
public:
    METHOD_LIST_BEGIN
    ADD_METHOD_TO(MainController::index, "/", Get);  // маршрут "/"
    METHOD_LIST_END

    void index(const HttpRequestPtr &req,
               std::function<void(const HttpResponsePtr &)> &&callback)
    {
        auto resp = HttpResponse::newHttpViewResponse("Index.csp");
        callback(resp);
    }
};
