
/* ==== FUN_0049b560 @ 0049b560 ==== 
 * signature: undefined __thiscall FUN_0049b560(void * this, int param_1)
 * body: 0049b560-0049b597
 */

void __thiscall FUN_0049b560(void *this,int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  switch(*puVar1) {
  case 0x30:
  case 0x46:
  case 0x66:
    *(undefined1 *)((int)this + 0x3c) = 0;
    break;
  case 0x31:
  case 0x54:
  case 0x74:
    *(undefined1 *)((int)this + 0x3c) = 1;
    return;
  }
  return;
}


