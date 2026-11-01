
/* ==== FUN_0055e220 @ 0055e220 ==== 
 * signature: undefined1[10] __stdcall FUN_0055e220(void)
 * body: 0055e220-0055e234
 */

undefined1  [10] FUN_0055e220(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}


