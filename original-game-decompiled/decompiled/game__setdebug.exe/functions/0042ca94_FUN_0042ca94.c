
/* ==== FUN_0042ca94 @ 0042ca94 ==== 
 * signature: undefined __register FUN_0042ca94(int param_1, int param_2, undefined4 * param_3)
 * body: 0042ca94-0042cb07
 */

void FUN_0042ca94(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int local_1c [4];
  
  bVar6 = 0;
  piVar5 = local_1c;
  iVar1 = FUN_0042ca14(param_1,param_2,(int)param_3);
  if (iVar1 == 0) {
    FUN_00402a2c(param_3,0x10,0);
  }
  else {
    iVar2 = FUN_0042c464(iVar1,'\x01');
    iVar3 = FUN_0042c464(iVar1,'\x02');
    iVar4 = FUN_0042c3f8(iVar1,'\x01');
    iVar1 = FUN_0042c3f8(iVar1,'\x02');
    FUN_0040e5c8(iVar1,iVar4,iVar3,piVar5,iVar2);
    piVar5 = local_1c;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *piVar5;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      param_3 = param_3 + (uint)bVar6 * -2 + 1;
    }
  }
  return;
}


