#include "sample/CustomSceneChangeArea.h"
#include "Game/System/GameSystem.h"
#include "Game/Util/JMapUtil.h"
#include "Game/Util/PlayerUtil.h"
#include "Game/Util/SceneUtil.h"
#include "Game/Util/ScreenUtil.h"

CustomSceneChangeArea::CustomSceneChangeArea(const char* pName) : AreaObj(pName) {

    mScenarioId = 1;
}

void CustomSceneChangeArea::init(const JMapInfoIter& rIter) {
    AreaObj::init(rIter);

}

void CustomSceneChangeArea::movement() {
    if (!mTargetGalaxy) {
        return;
    }

    if (isInVolume(*MR::getPlayerPos())) {
        MR::changePlayerModeInvincible();
    }
}