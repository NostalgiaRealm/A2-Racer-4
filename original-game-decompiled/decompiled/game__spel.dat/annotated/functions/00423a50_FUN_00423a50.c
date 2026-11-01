
/* ==== FUN_00423a50 @ 00423a50 ==== 
 * signature: undefined __cdecl FUN_00423a50(int param_1, undefined4 param_2, int param_3)
 * body: 00423a50-00423bee
 */

void __cdecl FUN_00423a50(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00569f58;
  local_c = ExceptionList;
  local_4 = 0;
  iVar4 = param_1 * 0xf0;
  ExceptionList = &local_c;
  *(undefined4 *)(iVar4 + 0x38 + DAT_00715e50) = *(undefined4 *)(iVar4 + 0x34 + DAT_00715e50);
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 != 1) {
      *(undefined4 *)(iVar4 + 0x50 + DAT_00715e50) = 1;
      goto LAB_00423ad4;
    }
  }
  else if (DAT_006fb954 == 1) {
    *(undefined4 *)(iVar4 + 0x50 + DAT_00715e50) = 1;
    goto LAB_00423ad4;
  }
  *(undefined4 *)(iVar4 + 0x50 + DAT_00715e50) = 0;
LAB_00423ad4:
  iVar3 = iVar4 + DAT_00715e50;
  iVar2 = FUN_004aac20(param_1,*(int *)(iVar4 + 0x50 + DAT_00715e50));
  *(int *)(iVar3 + 0x3c) = iVar2;
  *(code **)(iVar4 + 0x6c + DAT_00715e50) = FUN_00407300;
  iVar3 = FUN_00424660(&DAT_005d3458,(int)&param_2);
  FUN_00429320(param_1);
  FUN_004292e0(param_1);
  FUN_00429710(iVar3,param_1,0,0,0.0,0.0,(float)*(int *)(iVar3 + 0x40),0.05,0,0,'\0','\0','\0',
               FUN_0044f970,0);
  FUN_0042a7f0(param_1);
  FUN_004353e0(*(float *)(iVar3 + 0x44),param_1);
  FUN_00436b90(param_1);
  FUN_004a7190(param_1);
  *(undefined4 *)(iVar4 + 0x68 + DAT_00715e50) = 1;
  FUN_00450b00(param_1,s_POLITIE_SIRENE_00595980);
  FUN_00426bb0(&DAT_005d3460,param_1,4,iVar3 + 0x50);
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_3 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((LPVOID)(param_3 + -1));
  }
  ExceptionList = local_c;
  return;
}


