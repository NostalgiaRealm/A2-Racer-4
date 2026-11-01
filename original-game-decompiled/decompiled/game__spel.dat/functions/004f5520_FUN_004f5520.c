
/* ==== FUN_004f5520 @ 004f5520 ==== 
 * signature: undefined __thiscall FUN_004f5520(void * this, char * param_1)
 * body: 004f5520-004f555c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f5520(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    *(undefined1 *)((int)this + 4) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (8 < ~uVar2 - 1) {
    _DAT_00000000 = 0;
  }
  _strncpy((char *)((int)this + 4),param_1,8);
  return;
}


