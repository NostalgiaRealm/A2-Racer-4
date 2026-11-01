
/* ==== FUN_00416f21 @ 00416f21 ==== 
 * signature: undefined __fastcall FUN_00416f21(char * param_1)
 * body: 00416f21-0041718d
 */

void __fastcall FUN_00416f21(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (*param_1 == '\0') {
    FUN_004c3fa0((byte *)s_not_in_use_0059309c);
    return;
  }
  FUN_004c3fa0((byte *)s_Object____s__00593014);
  pcVar1 = param_1 + 0x18;
  (*(code *)**(undefined4 **)(param_1 + 0x18))();
  FUN_004c3fa0((byte *)s__d_state_s__00593024);
  iVar5 = 0;
  iVar2 = (*(code *)**(undefined4 **)pcVar1)();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (iVar3 = (*(code *)**(undefined4 **)pcVar1)(), iVar3 <= iVar5)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_state_index___d_005930fc);
      FUN_004c3fa0((byte *)s_state__d____s____d__00593034);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x18;
      iVar3 = (*(code *)**(undefined4 **)pcVar1)();
    } while (iVar5 < iVar3);
  }
  (*(code *)**(undefined4 **)(param_1 + 0x20))();
  FUN_004c3fa0((byte *)s__d_state_transition_s__0059304c);
  iVar5 = 0;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x20))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))(), iVar3 <= iVar5)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_state_transitio_005930a8);
      piVar6 = (int *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + iVar2);
      iVar3 = piVar6[1];
      if ((iVar3 < 0) || (iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x18))(), iVar4 <= iVar3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_state_index___d_005930fc);
      iVar3 = *piVar6;
      if ((iVar3 < 0) || (iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x18))(), iVar4 <= iVar3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_state_index___d_005930fc);
      FUN_004c3fa0((byte *)s_transition__d____s___>___s__00593064);
      iVar2 = iVar2 + 0xc;
      iVar5 = iVar5 + 1;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))();
    } while (iVar5 < iVar3);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if ((iVar2 < 0) || (iVar5 = (*(code *)**(undefined4 **)(param_1 + 0x18))(), iVar5 <= iVar2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  FUN_004a6980(iVar2,(byte *)s__s__d____Invalid_state_index___d_005930fc);
  FUN_004c3fa0((byte *)s_Current_state____s__00593084);
  return;
}


