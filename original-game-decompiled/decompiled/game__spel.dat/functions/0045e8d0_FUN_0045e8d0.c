
/* ==== FUN_0045e8d0 @ 0045e8d0 ==== 
 * signature: undefined4 __thiscall FUN_0045e8d0(void * this, char * param_1)
 * body: 0045e8d0-0045e91b
 */

undefined4 __thiscall FUN_0045e8d0(void *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = s_CEmitter_Add__Can_not_add_NULL_s_005a5c0c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_0057d508);
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((int)this + 0xa4);
  *(char **)((int)this + 0xa4) = param_1;
  *(void **)(param_1 + 0xa8) = this;
  if (*(int *)(param_1 + 0xa4) != 0) {
    *(char **)(*(int *)(param_1 + 0xa4) + 0xa8) = param_1;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


