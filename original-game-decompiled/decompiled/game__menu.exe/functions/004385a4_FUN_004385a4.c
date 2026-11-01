
/* ==== FUN_004385a4 @ 004385a4 ==== 
 * signature: undefined __register FUN_004385a4(int * param_1, int param_2, int param_3)
 * body: 004385a4-0043860c
 */

void FUN_004385a4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int local_14 [2];
  
  if ((char)param_3 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else {
    iVar1 = FUN_00436bc8((int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_0040f7d0(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),local_14);
      iVar1 = FUN_00437370((int)param_1,local_14,&uStack_18);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      uVar2 = FUN_00438528(param_2,iVar1);
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar2,iVar1);
    }
  }
  return;
}


