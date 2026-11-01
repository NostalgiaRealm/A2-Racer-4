
/* ==== FUN_00421938 @ 00421938 ==== 
 * signature: undefined FUN_00421938(void)
 * body: 00421938-0042193f
 */

char * FUN_00421938(char *param_1,undefined2 param_2)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  
  out(*unaff_ESI,param_2);
  if (unaff_EBP != 1) {
    SetPropA(*(HWND *)(unaff_EBP + 7),(LPCSTR)(uint)DAT_0044774a,DAT_00446624);
    SetPropA(*(HWND *)(unaff_EBP + 7),(LPCSTR)(uint)DAT_00447748,DAT_00446624);
    pvVar1 = DAT_00446624;
    DAT_00446624 = (HANDLE)0x0;
    uVar2 = (**(code **)((int)pvVar1 + 0x15c))();
    *(undefined4 *)(unaff_EBP + -5) = uVar2;
    return (char *)*unaff_EBX;
  }
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    return param_1;
  }
  if (*param_1 == '\x01') {
    *param_1 = '\0';
  }
  return param_1;
}


