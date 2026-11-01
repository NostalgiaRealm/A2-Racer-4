
/* ==== FUN_00542c90 @ 00542c90 ==== 
 * signature: undefined __thiscall FUN_00542c90(void * this, int * param_1)
 * body: 00542c90-00542cf5
 */

void __thiscall FUN_00542c90(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  *(int *)this = iVar3;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar3 + 0xa4);
  if (0x7ffffff < *(int *)(*(int *)this + 0x80) * 0x1000000) {
    piVar1 = (int *)((int)this + 100);
    iVar3 = 0x15;
    do {
      *piVar1 = (int)(param_1 + 0xc);
      piVar1 = piVar1 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)((int)this + 0x10) = *param_1;
    return;
  }
  puVar2 = (undefined4 *)((int)this + 100);
  iVar3 = 0x14;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(int **)((int)this + 0x14) = param_1 + 0xc;
  *(int *)((int)this + 0x10) = *param_1;
  return;
}


