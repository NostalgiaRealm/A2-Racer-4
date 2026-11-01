
/* ==== TGDIButtonDefinition.set_UpLink @ 00467d10 ==== 
 * signature: undefined TGDIButtonDefinition.set_UpLink(void)
 * body: 00467d10-00467d47
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_UpLink(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)TGDIButtonDefinition_get_UpLink(param_1,param_2);
  (**(code **)(*piVar1 + 8))(piVar1,param_3);
  FUN_00467b28(param_1);
  FUN_00467e60(param_1,0x5401,0,0);
  return;
}


