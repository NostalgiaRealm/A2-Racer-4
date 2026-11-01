
/* ==== FUN_0054f7cd @ 0054f7cd ==== 
 * signature: bool __thiscall FUN_0054f7cd(void * this, byte * param_1, int param_2, byte * param_3, int * param_4, int param_5, LPWSTR param_6, int * param_7)
 * body: 0054f7cd-0054f84e
 */

bool __thiscall
FUN_0054f7cd(void *this,byte *param_1,int param_2,byte *param_3,int *param_4,int param_5,
            LPWSTR param_6,int *param_7)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  size_t sVar4;
  
  piVar1 = param_4;
  *param_4 = param_2;
  *param_7 = param_5;
  pbVar2 = (byte *)*param_4;
  param_4 = (int *)(uint)(pbVar2 != param_3);
  while( true ) {
    if ((pbVar2 == param_3) || ((LPWSTR)*param_7 == param_6)) goto LAB_0054f845;
    uVar3 = FUN_0054ee6a((LPWSTR)*param_7,pbVar2,(int)param_3 - (int)pbVar2,param_1,
                         (int *)((int)this + 8));
    if (uVar3 == 0xfffffffe) break;
    if (uVar3 == 0xffffffff) {
      return true;
    }
    if (uVar3 == 0) {
      sVar4 = _strlen((char *)*piVar1);
      uVar3 = sVar4 + 1;
    }
    *piVar1 = *piVar1 + uVar3;
    *param_7 = *param_7 + 2;
    param_4 = (int *)0x0;
    pbVar2 = (byte *)*piVar1;
  }
  *piVar1 = (int)param_3;
LAB_0054f845:
  return SUB41(param_4,0);
}


