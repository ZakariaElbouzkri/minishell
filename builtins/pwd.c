#include "../minishell.h"

// void	pwd(t_env *env, int p)
// {
// 	if (!env)
// 		return ;
// 	if (!ft_strncmp("PWD", env->name, ft_strlen(env->name)))
// 	{
// 		ft_putstr_fd(env->value, 1);
// 		return ;
// 	}
// 	pwd(env->next);
// }

void	ft_pwd(t_exec *exec, int p)
{
	char	*path;

	(void)exec;
	path = getcwd(NULL, 0);
	if (!path)
	{
		ft_put_error(2, "pwd", strerror(errno));
		g_status = 1;
		if (!p)
			exit(1);
	}
	// printf("%s\n", path);
	ft_putstr_fd(path, 1);
	ft_putstr_fd("\n", 1);
	free(path);
	if (!p)
		exit(0);
}

