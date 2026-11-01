
/* ==== FUN_0045dd74 @ 0045dd74 ==== 
 * signature: int * __register FUN_0045dd74(int param_1, uint param_2)
 * body: 0045dd74-0045dda5
 */

int * FUN_0045dd74(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = TDaviGraphicDef_get_UpLink(param_1,param_2);
  piVar3 = *(int **)(iVar2 + 0xc);
  cVar1 = (**(code **)(*piVar3 + 0x1c))();
  if (cVar1 != '\0') {
    iVar2 = TDaviGraphicDef_get_UpLink(param_1,0);
    piVar3 = *(int **)(iVar2 + 0xc);
  }
  return piVar3;
}


