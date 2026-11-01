
/* ==== FUN_004a4600 @ 004a4600 ==== 
 * signature: undefined __fastcall FUN_004a4600(int param_1)
 * body: 004a4600-004a4809
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a4600(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char acStack_3c [56];
  
  FUN_004a33f0((byte *)s__________________________________005af518);
  FUN_004a33f0((byte *)s__________Physics_WorldManager_Re_005af4e4);
  FUN_004a33f0((byte *)s__________________________________005af518);
  FUN_004a33f0((byte *)s____Simulation_Time___f_sec____005af4c0);
  FUN_004a33f0((byte *)s____Last_DeltaT___f_sec____005af4a0);
  FUN_004a33f0((byte *)s____Input_Units_Scale___f____005af480);
  FUN_004a33f0((byte *)s____Gravity___f__f__f____005af460);
  FUN_004a33f0((byte *)s__________________________________005af518);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x18))();
  FUN_004a33f0((byte *)s____Object_List_Count____d____005af440);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar4 * 4);
      this = *(void **)(iVar1 + 8);
      if (*(int *)(iVar1 + 4) == 0) {
        pcVar5 = acStack_3c;
        uVar6 = 2;
        uVar3 = FUN_0055933d(this,(byte *)((int)this + 0x90));
        FUN_00567b81(uVar3,pcVar5,uVar6);
        FUN_004a33f0((byte *)s____Object___d_____s_uses_geometr_005af3c0);
      }
      else {
        pcVar5 = acStack_3c;
        uVar6 = 2;
        uVar3 = FUN_0055933d(this,(byte *)((int)this + 0x90));
        FUN_00567b81(uVar3,pcVar5,uVar6);
        FUN_004a33f0((byte *)s____Object___d_____s_uses_geometr_005af400);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_004a33f0((byte *)s__________________________________005af518);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 100))();
  FUN_004a33f0((byte *)s____Geometry_List_Count____d____005af39c);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      FUN_004a33f0((byte *)s____Geometry___d_____s_005af384);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_004a33f0((byte *)s__________________________________005af518);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x6c))();
  FUN_004a33f0((byte *)s____Material_List_Count____d____005af360);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      FUN_004a33f0((byte *)s____Material___d_____s_005af348);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}


