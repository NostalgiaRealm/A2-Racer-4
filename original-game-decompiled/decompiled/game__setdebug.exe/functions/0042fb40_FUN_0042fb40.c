
/* ==== FUN_0042fb40 @ 0042fb40 ==== 
 * signature: undefined __register FUN_0042fb40(int * param_1, undefined4 param_2)
 * body: 0042fb40-0042fb97
 */

void FUN_0042fb40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_2 != *(char *)((int)param_1 + 0x59)) {
    iVar4 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],iVar3);
        uVar2 = FUN_00402e8c(piVar1,(int)FUN_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],iVar3);
          (**(code **)(*piVar1 + 0x48))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(char *)((int)param_1 + 0x59) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


