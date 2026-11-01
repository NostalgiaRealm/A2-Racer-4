
/* ==== FUN_00472a85 @ 00472a85 ==== 
 * signature: bool __thiscall FUN_00472a85(void * this, int param_1)
 * body: 00472a85-00472a8f
 */

bool __thiscall FUN_00472a85(void *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  pbVar3 = *(byte **)((int)this + 8);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  iVar2 = FUN_00567c10(pbVar3,pcVar1,*(void **)(param_1 + 8));
  return iVar2 == 0;
}


