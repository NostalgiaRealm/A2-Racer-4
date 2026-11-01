
/* ==== FUN_004f4560 @ 004f4560 ==== 
 * signature: undefined __thiscall FUN_004f4560(void * this, int param_1)
 * body: 004f4560-004f45d3
 */

void __thiscall FUN_004f4560(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(float *)((int)this + 0x70) = (float)*(double *)(param_1 + 8);
  puVar2 = (undefined4 *)((int)this + 0xe8);
  puVar3 = (undefined4 *)((int)this + 0x108);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  return;
}


