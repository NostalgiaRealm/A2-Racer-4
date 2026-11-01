
/* ==== FUN_00416f1b @ 00416f1b ==== 
 * signature: undefined __fastcall FUN_00416f1b(char * param_1)
 * body: 00416f1b-00416f1f
 */

void __fastcall FUN_00416f1b(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_4;
  
  if (*param_1 == '\0') {
    FUN_004c3fa0((byte *)s_not_in_use_0059309c);
    return;
  }
  FUN_004c3fa0((byte *)s_Object____s__00593014);
  pcVar1 = param_1 + 0x18;
  (*(code *)**(undefined4 **)(param_1 + 0x18))();
  FUN_004c3fa0((byte *)s__d_state_s__00593024);
  iVar4 = 0;
  iVar2 = (*(code *)**(undefined4 **)pcVar1)();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (iVar3 = (*(code *)**(undefined4 **)pcVar1)(), iVar3 <= iVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_state_index___d_005930fc);
      FUN_004c3fa0((byte *)s_state__d____s____d__00593034);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x18;
      iVar3 = (*(code *)**(undefined4 **)pcVar1)();
    } while (iVar4 < iVar3);
  }
  (*(code *)**(undefined4 **)(param_1 + 0x20))();
  FUN_004c3fa0((byte *)s__d_state_transition_s__0059304c);
  iVar4 = 0;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x20))();
  if (0 < iVar2) {
    iStack_4 = 0;
    do {
      if ((iStack_4 < 0) || (iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x20))(), iVar2 <= iVar4)
         ) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      FUN_004a6980(iVar2,(byte *)s__s__d____Invalid_state_transitio_005930a8);
      piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + iStack_4);
      iVar2 = piVar5[1];
      if ((iVar2 < 0) || (iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x18))(), iVar3 <= iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      FUN_004a6980(iVar2,(byte *)s__s__d____Invalid_state_index___d_005930fc);
      iVar2 = *piVar5;
      if ((iVar2 < 0) || (iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x18))(), iVar3 <= iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      FUN_004a6980(iVar2,(byte *)s__s__d____Invalid_state_index___d_005930fc);
      FUN_004c3fa0((byte *)s_transition__d____s___>___s__00593064);
      iStack_4 = iStack_4 + 0xc;
      iVar4 = iVar4 + 1;
      iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x20))();
    } while (iVar4 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if ((iVar2 < 0) || (iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x18))(), iVar4 <= iVar2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  FUN_004a6980(iVar2,(byte *)s__s__d____Invalid_state_index___d_005930fc);
  FUN_004c3fa0((byte *)s_Current_state____s__00593084);
  return;
}


