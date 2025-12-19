#include <iostream>
int main() {
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    //   sol::state lua;
    //   lua.open_libraries(sol::lib::base, sol::lib::package, sol::lib::string,
    //                      sol::lib::table, sol::lib::math, sol::lib::debug, sol::lib::io);
    //   lua.require("lfs", &luaopen_lfs);
    //   lua.new_usertype<Entity>("Entity",
    //     "print", &Entity::print);
    //   lua.new_usertype<Player>("Player",
    //     sol::constructors<Player(const std::string&, int)>(),
    //     sol::base_classes, sol::bases<Entity>(),
    //     "name", &Player::name,
    //     "take_damage", &Player::take_damage,
    //     "heal", &Player::heal,
    //     "get_health", &Player::get_health);
    //   const fs::path luaLibsPath = LUA_LIBS_DIR;
    //   const fs::path lib_package_path = luaLibsPath/ "?.lua";
    //   lua["package"]["path"] = std::format("{};{}", lua["package"]["path"].get<std::string>(), lib_package_path.string());
    //   fmt::println("lua package path: {}", lua["package"]["path"].get<std::string>());
    //   auto player2 = Player("Player2", 50);
    //   lua["player2"] = player2;
    //
    //   try {
    //     const fs::path script_path = luaLibsPath / "main.lua";
    //     lua.script_file(script_path.string(), sol::script_throw_on_error);
    //   } catch (const sol::error &e) {
    //     spdlog::error("Lua error: {}", e.what());
    //   }

    return 0;
}
