
/* ==== FUN_0045c82c @ 0045c82c ==== 
 * signature: undefined __register FUN_0045c82c(int * param_1)
 * body: 0045c82c-0045c85e
 */

void FUN_0045c82c(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    if (param_1[0x12] != 0) {
      FUN_0040c968(param_1 + 0x12);
      (**(code **)(*param_1 + 0x6c))(param_1,param_1);
    }
  }
  return;
}


