
/* ==== TMenuItem.vmt_030 @ 0043ead8 ==== 
 * signature: undefined TMenuItem.vmt_030(void)
 * body: 0043ead8-0043ebef
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_030(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                      ushort param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [8];
  
  puVar4 = auStack_24;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = thunk_FUN_0043f588((int)param_1);
  iVar1 = FUN_0043ebf0((int)param_1);
  if (((iVar3 == 0) || ((*(char *)(iVar3 + 0x34) == '\0' && (iVar1 == 0)))) ||
     ((*(short *)((int)param_1 + 0x92) == 0 && (*(short *)((int)param_1 + 0x8a) == 0)))) {
    if ((iVar3 == 0) || (uVar2 = FUN_00440a7c(iVar3), (char)uVar2 != '\0')) {
      FUN_0043e230();
    }
    else {
      FUN_0043d9b0();
    }
  }
  else {
    (**(code **)(*param_1 + 0x34))(param_1,param_2,auStack_24,(param_5 & 1) != 0);
    if (*(short *)((int)param_1 + 0x92) != 0) {
      (*(code *)param_1[0x24])
                (param_1[0x25],param_1,param_2,CONCAT22((short)((uint)auStack_24 >> 0x10),param_5),
                 auStack_24);
    }
  }
  return;
}


