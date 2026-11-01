
/* ==== FUN_0054f84f @ 0054f84f ==== 
 * signature: undefined1 __thiscall FUN_0054f84f(void * this, undefined4 * param_1, int param_2, WCHAR * param_3, int * param_4, int param_5, LPSTR param_6, int * param_7)
 * body: 0054f84f-0054f921
 */

undefined1 __thiscall
FUN_0054f84f(void *this,undefined4 *param_1,int param_2,WCHAR *param_3,int *param_4,int param_5,
            LPSTR param_6,int *param_7)

{
  LPSTR pCVar1;
  int *piVar2;
  int *piVar3;
  WCHAR *pWVar4;
  int iVar5;
  uint uVar6;
  
  piVar3 = param_7;
  piVar2 = param_4;
  *param_4 = param_2;
  *param_7 = param_5;
  pWVar4 = (WCHAR *)*param_4;
  param_2 = (int)(pWVar4 != param_3);
  do {
    if ((pWVar4 == param_3) || (pCVar1 = (LPSTR)*piVar3, pCVar1 == param_6)) goto LAB_0054f918;
    if ((int)param_6 - (int)pCVar1 < DAT_005c8378) {
      param_7 = (int *)*param_1;
      uVar6 = FUN_0054eaa1((LPSTR)((int)&param_4 + 2),*pWVar4,param_1,(int *)((int)this + 8));
      if ((int)uVar6 < 1) {
        return 2;
      }
      if ((int)param_6 - *piVar3 < (int)uVar6) {
        *param_1 = param_7;
LAB_0054f918:
        return (char)param_2;
      }
      FUN_0055b3c0((undefined4 *)*piVar3,(undefined4 *)((int)&param_4 + 2),uVar6);
      *piVar2 = *piVar2 + 2;
      *piVar3 = *piVar3 + uVar6;
    }
    else {
      iVar5 = FUN_0054eaa1(pCVar1,*pWVar4,param_1,(int *)((int)this + 8));
      if (iVar5 < 1) {
        return 2;
      }
      *piVar2 = *piVar2 + 2;
      *piVar3 = *piVar3 + iVar5;
    }
    param_2 = 0;
    pWVar4 = (WCHAR *)*piVar2;
  } while( true );
}


