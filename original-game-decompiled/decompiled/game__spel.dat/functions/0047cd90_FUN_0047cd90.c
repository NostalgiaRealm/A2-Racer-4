
/* ==== FUN_0047cd90 @ 0047cd90 ==== 
 * signature: undefined __thiscall FUN_0047cd90(void * this, float * param_1)
 * body: 0047cd90-0047ce34
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047cd90(void *this,float *param_1)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
  DAT_007126b8 = (float)(fVar1 * (float10)0.9900000095367432 * (float10)0.003125);
  _DAT_007126c0 = DAT_007126b8;
  _DAT_007126bc =
       (float)(((float10)DAT_005b379c / (float10)DAT_005b3798) * fVar1 * (float10)0.9900000095367432
              * (float10)0.004166667);
  local_c = DAT_007126b8 * *param_1;
  local_8 = _DAT_007126bc * param_1[1];
  local_4 = DAT_007126b8 * param_1[2];
  FUN_0047bc70(this,&local_c);
  return;
}


