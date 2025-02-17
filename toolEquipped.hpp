#ifndef TOOLEQUIPPED_HPP
#define TOOLEQUIPPED_HPP
#include "src/Chef.hpp"
#include "src/Values.hpp"

// 关于技法：
// 例：skill->ability.add(30);     // 全技法+30
// 例：skill->ability.bake += 150; // 烤技法+150,
//   bake 烤；knife 切；stirfry 炒；fry 炸；steam 蒸；boil 煮

// 关于技法售价：
// 例：skill->abilityBuff.bake += 25; // 烤售价+25%

// 关于口味售价：
// 例：skill->flavorBuff.sweet += 30; // 甜售价+30%
//   sweeet 甜；spicy 辣；salty 咸；tasty 鲜；sour 酸；bitter 苦

// 关于食材售价：
// 例：skill->materialBuff.vegetable += 15; // 蔬菜售价+15%
//   vegetable 菜类；meat 肉类；fish 鱼类；creation 面类

// 关于金币获得：
// 例：skill->coinBuff += 30; // 金币获得+30%

void toolEquipped(Chef *chef) {

    ///////////// 自定义厨师装备的厨具：

    auto skill = &chef->skill; // 这句不用管，放着就好。

    if (chef->name == "花卷") {              // 金锄头
        chef->tool = NO_TOOL;                // 不允许装备其他厨具
    }
    if (chef->name == "孑子推" || chef->name == "羽十六") {    // 传世秘籍
        skill->ability.add(40); 
        chef->tool = NO_TOOL;          // 不允许装备其他厨具
    }
    if (chef->name == "珍艾") {
        chef->tool = NO_TOOL;
    }
    if (chef->name == "申公子") {
        chef->tool = NO_TOOL;
    }
}
#endif
