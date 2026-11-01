
/* ==== FUN_004a1c50 @ 004a1c50 ==== 
 * signature: undefined __thiscall FUN_004a1c50(void * this, float * param_1)
 * body: 004a1c50-004a1ca2
 */

void __thiscall FUN_004a1c50(void *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_c0 [16];
  double local_80 [16];
  
  FUN_004f2b10(*(void **)((int)this + 8),local_80);
  pfVar1 = (float *)FUN_004a5970(local_c0,local_80);
  pfVar3 = local_c0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  pfVar1 = local_c0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


