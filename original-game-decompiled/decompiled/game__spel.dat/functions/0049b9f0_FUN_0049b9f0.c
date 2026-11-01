
/* ==== FUN_0049b9f0 @ 0049b9f0 ==== 
 * signature: undefined __thiscall FUN_0049b9f0(void * this, int param_1)
 * body: 0049b9f0-0049ba12
 */

void __thiscall FUN_0049b9f0(void *this,int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  pbVar1 = *(byte **)(param_1 + 4);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
  uVar2 = FUN_0055933d(this,pbVar1);
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  return;
}


