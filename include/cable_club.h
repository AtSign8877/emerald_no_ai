#ifndef GUARD_CABLE_CLUB_H
#define GUARD_CABLE_CLUB_H

#include "task.h"
#include "constants/cable_club.h"

void CreateTask_EnterCableClubSeat(TaskFunc taskFunc);
u8 CreateTask_ReestablishCableClubLink(void);
void CB2_ReturnFromCableClubBattle(void);
bool32 AreBattleTowerLinkSpeciesSame(u16 *speciesList1, u16 *speciesList2);
void Task_ReconnectWithLinkPlayers(u8 taskId);
void Task_WaitForLinkPlayerConnection(u8 taskId);
bool32 GetLinkTrainerCardColor(u8 linkPlayerIndex);
void CreateLinkupTask(u8 minPlayers, u8 maxPlayers);
void ColosseumPlayerSpotTriggered(void);
void TriggerLinkedTrainerBattle(u8 transition, u16 song);
void CreateTask_EnterCableClubSeat_1(TaskFunc taskFunc, u8 transition, u16 song);
void CB2_ReturnFromLinkedTrainerBattle(void);

#endif //GUARD_CABLE_CLUB_H
