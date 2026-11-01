
/* ==== FUN_0041c990 @ 0041c990 ==== 
 * signature: uint __thiscall FUN_0041c990(void * this, char * param_1, uint param_2, uint param_3)
 * body: 0041c990-0041ca11
 */

uint __thiscall FUN_0041c990(void *this,char *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  char *_Buf;
  uint uVar2;
  char *_MaxCount;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 8) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 8)) &&
       (uVar2 = *(uint *)((int)this + 8) - param_2, param_3 <= uVar2)) {
      _MaxCount = (char *)(uVar2 + (1 - param_3));
      _Buf = (char *)(*(int *)((int)this + 4) + param_2);
      while( true ) {
        pcVar1 = _memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
        if (pcVar1 == (char *)0x0) break;
        bVar5 = true;
        uVar2 = param_3;
        pcVar3 = pcVar1;
        pcVar4 = param_1;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          bVar5 = *pcVar3 == *pcVar4;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          return (int)pcVar1 - *(int *)((int)this + 4);
        }
        _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar1));
        _Buf = pcVar1 + 1;
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}


