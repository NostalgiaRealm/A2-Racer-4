
/* ==== FUN_00439e48 @ 00439e48 ==== 
 * signature: undefined __register FUN_00439e48(int * param_1, int param_2)
 * body: 00439e48-00439e9f
 */

void FUN_00439e48(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != param_1[0x19]) {
    iVar4 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_004102b0((undefined4 *)param_1[0x10],iVar3);
        uVar2 = FUN_00403114(piVar1,(int)FUN_00439530);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_004102b0((undefined4 *)param_1[0x10],iVar3);
          (**(code **)(*piVar1 + 0x54))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[0x19] = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


