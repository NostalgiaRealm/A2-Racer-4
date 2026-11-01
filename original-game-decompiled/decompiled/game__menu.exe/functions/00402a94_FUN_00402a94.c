
/* ==== FUN_00402a94 @ 00402a94 ==== 
 * signature: undefined __register FUN_00402a94(void)
 * body: 00402a94-00402aaa
 */

void FUN_00402a94(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
  fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
  fscale((float10)1 + fVar2,fVar1);
  return;
}


