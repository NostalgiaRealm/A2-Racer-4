
/* ==== FUN_004ed120 @ 004ed120 ==== 
 * signature: LPVOID __thiscall FUN_004ed120(void * this, byte param_1)
 * body: 004ed120-004ed156
 */

LPVOID __thiscall FUN_004ed120(void *this,byte param_1)

{
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


