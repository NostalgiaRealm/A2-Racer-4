
/* ==== FUN_0042b880 @ 0042b880 ==== 
 * signature: undefined __register FUN_0042b880(char * param_1)
 * body: 0042b880-0042b892
 */

void FUN_0042b880(char *param_1)

{
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    return;
  }
  if (*param_1 == '\x01') {
    *param_1 = '\0';
  }
  return;
}


