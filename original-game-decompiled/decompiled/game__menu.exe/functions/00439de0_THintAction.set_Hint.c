
/* ==== THintAction.set_Hint @ 00439de0 ==== 
 * signature: undefined __register THintAction.set_Hint(int * param_1, uint * param_2)
 * body: 00439de0-00439e45
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void THintAction_set_Hint(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 in_ZF;
  
  FUN_00403fec(param_2,(uint *)param_1[0x18]);
  if (!(bool)in_ZF) {
    iVar4 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_004102b0((undefined4 *)param_1[0x10],iVar3);
        uVar2 = FUN_00403114(piVar1,(int)FUN_00439530);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_004102b0((undefined4 *)param_1[0x10],iVar3);
          (**(code **)(*piVar1 + 0x50))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00403cb0(param_1 + 0x18,param_2);
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


