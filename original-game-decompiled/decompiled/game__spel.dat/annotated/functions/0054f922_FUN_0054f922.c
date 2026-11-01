
/* ==== FUN_0054f922 @ 0054f922 ==== 
 * signature: int __thiscall FUN_0054f922(void * this, undefined4 param_1, WCHAR * param_2, WCHAR * param_3, uint param_4)
 * body: 0054f922-0054f970
 */

int __thiscall
FUN_0054f922(void *this,undefined4 param_1,WCHAR *param_2,WCHAR *param_3,uint param_4)

{
  WCHAR *pWVar1;
  uint uVar2;
  WCHAR *pWVar3;
  
  pWVar1 = param_2;
  pWVar3 = param_2;
  if (param_2 != param_3) {
    while (param_4 != 0) {
      uVar2 = FUN_0054eaa1((LPSTR)((int)&param_2 + 2),*pWVar3,param_1,(int *)((int)this + 8));
      if (((int)uVar2 < 1) || (param_4 < uVar2)) break;
      param_4 = param_4 - uVar2;
      pWVar3 = pWVar3 + 1;
      if (pWVar3 == param_3) break;
    }
  }
  return (int)pWVar3 - (int)pWVar1 >> 1;
}


