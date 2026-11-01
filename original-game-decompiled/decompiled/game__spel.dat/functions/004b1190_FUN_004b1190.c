
/* ==== FUN_004b1190 @ 004b1190 ==== 
 * signature: undefined __thiscall FUN_004b1190(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004b1190-004b11bd
 */

void __thiscall
FUN_004b1190(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0xb8) = param_1;
  *(undefined4 *)((int)this + 0xbc) = param_2;
  *(undefined4 *)((int)this + 0x74) = 1;
  *(undefined4 *)((int)this + 0xc0) = param_3;
  *(undefined4 *)((int)this + 0xc4) = param_4;
  return;
}


