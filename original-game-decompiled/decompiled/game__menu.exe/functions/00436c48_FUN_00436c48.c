
/* ==== FUN_00436c48 @ 00436c48 ==== 
 * signature: undefined __register FUN_00436c48(int param_1, int param_2, undefined4 * param_3)
 * body: 00436c48-00436cbb
 */

void FUN_00436c48(int param_1,int param_2,undefined4 *param_3)

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
  iVar1 = FUN_00436bc8(param_1,param_2,(int)param_3);
  if (iVar1 == 0) {
    FUN_00402c30(param_3,0x10,0);
  }
  else {
    iVar2 = FUN_00436618(iVar1,'\x01');
    iVar3 = FUN_00436618(iVar1,'\x02');
    iVar4 = FUN_004365ac(iVar1,'\x01');
    iVar1 = FUN_004365ac(iVar1,'\x02');
    FUN_0040f804(iVar1,iVar4,iVar3,piVar5,iVar2);
    piVar5 = local_1c;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *piVar5;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      param_3 = param_3 + (uint)bVar6 * -2 + 1;
    }
  }
  return;
}


