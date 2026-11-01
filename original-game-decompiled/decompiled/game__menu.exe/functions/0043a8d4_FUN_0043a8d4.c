
/* ==== FUN_0043a8d4 @ 0043a8d4 ==== 
 * signature: undefined __register FUN_0043a8d4(int * param_1, undefined4 param_2, int * param_3)
 * body: 0043a8d4-0043a91a
 */

void FUN_0043a8d4(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  if (param_3 != (int *)0x0) {
    bVar1 = FUN_0043a3e4((int)param_1);
    if (bVar1) {
      (**(code **)(*param_3 + 0x34))(param_3,param_1[9]);
      (**(code **)(*param_3 + 0x40))(param_3,param_1[10]);
      uVar4 = 0;
      uVar3 = 1;
      iVar2 = FUN_0041df1c(param_3);
      FUN_0043ae38(param_1,iVar2,0,uVar3,param_2,uVar4);
    }
  }
  return;
}


