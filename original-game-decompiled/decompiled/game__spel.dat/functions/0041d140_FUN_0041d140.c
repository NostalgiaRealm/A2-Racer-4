
/* ==== FUN_0041d140 @ 0041d140 ==== 
 * signature: undefined __thiscall FUN_0041d140(void * this, int param_1)
 * body: 0041d140-0041d2d4
 */

void __thiscall FUN_0041d140(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 local_78 [13];
  float local_44;
  float local_3c;
  float local_38;
  float local_30;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004bf5d0(local_78);
  local_4 = 0;
  puVar3 = (undefined4 *)FUN_0041d0c0(param_1);
  puVar6 = local_78;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  lVar7 = __ftol();
  uVar5 = (int)(uint)lVar7 >> 0x1f;
  fVar1 = (float)(int)(((uint)lVar7 ^ uVar5) - uVar5) * 0.5;
  fVar2 = fVar1 * 0.5;
  FUN_0041d2e0(local_44,5.0,local_3c,fVar1,fVar2,140.0,this);
  FUN_0041d2e0(fVar1 + local_44,5.0,local_3c,fVar2,fVar2,140.0,(float *)((int)this + 0x24));
  FUN_0041d2e0(local_38,5.0,local_30,fVar2,fVar1,140.0,(float *)((int)this + 0x48));
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


