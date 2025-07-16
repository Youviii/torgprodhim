// controllers/MainController.cc
#include <drogon/HttpController.h>
using namespace drogon;

class MainController : public drogon::HttpController<MainController> {
public:
    METHOD_LIST_BEGIN
    ADD_METHOD_TO(MainController::index, "/", Get);  // маршрут "/"
    ADD_METHOD_TO(MainController::about, "/about", Get);  // маршрут "/about"
    METHOD_LIST_END

    void index(const HttpRequestPtr &req,
               std::function<void(const HttpResponsePtr &)> &&callback)
    {
        auto resp = HttpResponse::newHttpViewResponse("Index.csp");
        callback(resp);
    }

    void about(const HttpRequestPtr &req,
               std::function<void(const HttpResponsePtr &)> &&callback)
    {
        auto resp = HttpResponse::newHttpViewResponse("About.csp");
        callback(resp);
    }
};
