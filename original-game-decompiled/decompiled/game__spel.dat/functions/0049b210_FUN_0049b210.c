
/* ==== FUN_0049b210 @ 0049b210 ==== 
 * signature: int __thiscall FUN_0049b210(void * this, void * param_1, uint param_2, size_t param_3)
 * body: 0049b210-0049b26e
 */

int __thiscall FUN_0049b210(void *this,void *param_1,uint param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
  if ((param_3 != 0) && (uVar1 = *(uint *)((int)this + 8), param_2 < uVar1)) {
    iVar2 = *(int *)((int)this + 4);
    for (pcVar4 = (char *)(iVar2 + param_2); pcVar4 < (char *)(iVar2 + uVar1); pcVar4 = pcVar4 + 1)
    {
      pvVar3 = _memchr(param_1,(int)*pcVar4,param_3);
      if (pvVar3 != (void *)0x0) {
        return (int)pcVar4 - *(int *)((int)this + 4);
      }
    }
  }
  return -1;
}


