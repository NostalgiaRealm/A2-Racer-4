
/* ==== FUN_0049b7b0 @ 0049b7b0 ==== 
 * signature: undefined __thiscall FUN_0049b7b0(void * this, int param_1)
 * body: 0049b7b0-0049b7d2
 */

void __thiscall FUN_0049b7b0(void *this,int param_1)

{
  byte *pbVar1;
  float10 fVar2;
  
  pbVar1 = *(byte **)(param_1 + 4);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
  fVar2 = FUN_005596c8(this,pbVar1);
  *(float *)((int)this + 0x3c) = (float)fVar2;
  return;
}


