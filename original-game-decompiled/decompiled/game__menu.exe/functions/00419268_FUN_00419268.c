
/* ==== FUN_00419268 @ 00419268 ==== 
 * signature: undefined __register FUN_00419268(int * param_1, int param_2, int param_3, undefined * param_4)
 * body: 00419268-004192ef
 */

void FUN_00419268(int *param_1,int param_2,int param_3,undefined *param_4)

{
  undefined4 uVar1;
  LONG LVar2;
  UINT c;
  LPCSTR lpString;
  INT *lpDx;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xb);
  uVar1 = FUN_0041923c(param_1);
  if ((char)uVar1 == '\x01') {
    LVar2 = FUN_00419338(param_1,param_4);
    param_2 = param_2 + LVar2 + 1;
  }
  lpDx = (INT *)0x0;
  c = FUN_00403edc((int)param_4);
  lpString = FUN_004040a0(param_4);
  ExtTextOutA((HDC)param_1[1],param_2,param_3,param_1[0x15],(RECT *)0x0,lpString,c,lpDx);
  LVar2 = FUN_00419338(param_1,param_4);
  FUN_00419154(param_1,LVar2 + param_2,param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}


