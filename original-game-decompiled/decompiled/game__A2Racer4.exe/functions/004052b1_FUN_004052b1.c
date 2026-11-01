
/* ==== FUN_004052b1 @ 004052b1 ==== 
 * signature: char * __cdecl FUN_004052b1(int param_1, LPCSTR param_2, undefined4 * param_3, char * param_4)
 * body: 004052b1-00405301
 */

char * __cdecl FUN_004052b1(int param_1,LPCSTR param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_004055f8(param_3,(undefined4 *)param_4,&param_4,&param_3);
  if (iVar1 == -1) {
    return (char *)0xffffffff;
  }
  pcVar2 = FUN_00405419(param_1,param_2,param_4,param_3);
  FUN_00403657(param_4);
  FUN_00403657(param_3);
  return pcVar2;
}


