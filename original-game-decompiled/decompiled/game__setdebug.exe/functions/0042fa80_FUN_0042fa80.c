
/* ==== FUN_0042fa80 @ 0042fa80 ==== 
 * signature: undefined __register FUN_0042fa80(int * param_1, uint * param_2)
 * body: 0042fa80-0042fae5
 */

void FUN_0042fa80(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 in_ZF;
  
  FUN_00403d48(param_2,(uint *)param_1[0x15]);
  if (!(bool)in_ZF) {
    iVar4 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],iVar3);
        uVar2 = FUN_00402e8c(piVar1,(int)FUN_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],iVar3);
          (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00403a0c(param_1 + 0x15,param_2);
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


