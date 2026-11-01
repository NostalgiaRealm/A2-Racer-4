
/* ==== FUN_0042e3f0 @ 0042e3f0 ==== 
 * signature: undefined __register FUN_0042e3f0(int * param_1, int param_2, int param_3)
 * body: 0042e3f0-0042e458
 */

void FUN_0042e3f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int local_14 [2];
  
  if ((char)param_3 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else {
    iVar1 = FUN_0042ca14((int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_0040e594(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),local_14);
      iVar1 = FUN_0042d1bc((int)param_1,local_14,&uStack_18);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      uVar2 = FUN_0042e374(param_2,iVar1);
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar2,iVar1);
    }
  }
  return;
}


