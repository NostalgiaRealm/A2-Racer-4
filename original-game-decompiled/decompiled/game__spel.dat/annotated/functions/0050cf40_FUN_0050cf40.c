
/* ==== FUN_0050cf40 @ 0050cf40 ==== 
 * signature: undefined4 * __thiscall FUN_0050cf40(void * this, char * param_1)
 * body: 0050cf40-0050cf65
 */

undefined4 * __thiscall FUN_0050cf40(void *this,char *param_1)

{
  char *pcVar1;
  
  *(undefined ***)this = &PTR_FUN_0057892c;
  pcVar1 = FUN_00501030(param_1);
  *(char **)((int)this + 4) = pcVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


