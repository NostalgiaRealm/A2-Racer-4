
/* ==== FUN_00426880 @ 00426880 ==== 
 * signature: undefined __thiscall FUN_00426880(void * this, int param_1, float param_2, undefined4 param_3)
 * body: 00426880-0042691e
 */

void __thiscall FUN_00426880(void *this,int param_1,float param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0x14 + 0x10);
  iVar2 = FUN_00425300((int)puVar1);
  FUN_00426280((void *)((int)this + param_1 * 0xe28 + 0x1398),iVar2);
  FUN_004266f0(this,param_1);
  iVar2 = FUN_00425230(puVar1);
  fVar3 = FUN_004252c0((int)puVar1);
  if ((float10)param_2 < fVar3) {
    FUN_0045b3b0(iVar2,iVar2,param_3);
    return;
  }
  FUN_0045b3b0(iVar2,iVar2,param_3);
  FUN_0045b3b0(iVar2,iVar2,param_3);
  FUN_0045b3b0(iVar2,iVar2,param_3);
  FUN_0045b3b0(iVar2,iVar2,param_3);
  FUN_0045bd30(iVar2,iVar2);
  return;
}


