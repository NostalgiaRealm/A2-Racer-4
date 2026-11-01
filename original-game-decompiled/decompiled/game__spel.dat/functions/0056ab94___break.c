
/* ==== __break @ 0056ab94 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0056ab94-0056ab94
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


