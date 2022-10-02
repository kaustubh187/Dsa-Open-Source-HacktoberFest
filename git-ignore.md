
If you want to ignore a file that is already checked in, you must untrack the file before you add a rule to ignore it. From your terminal, untrack the file.

```shell
$ git rm --cached <em>FILENAME</em>
```

## Configuring ignored files for all repositories on your computer

You can also create a global *.gitignore* file to define a list of rules for ignoring files in every Git repository on your computer. For example, you might create the file at *~/.gitignore_global* and add some rules to it.

{% data reusables.command_line.open_the_multi_os_terminal %}
2. Configure Git to use the exclude file *~/.gitignore_global* for all Git repositories.
  ```shell
  $ git config --global core.excludesfile ~/.gitignore_global
  ```

## Excluding local files without creating a *.gitignore* file

If you don't want to create a *.gitignore* file to share with others, you can create rules that are not committed with the repository. You can use this technique for locally-generated files that you don't expect other users to generate, such as files created by your editor.

Use your favorite text editor to open the file called *.git/info/exclude* within the root of your Git repository. Any rule you add here will not be checked in, and will only ignore files for your local repository.

{% data reusables.command_line.open_the_multi_os_terminal %}
2. Navigate to the location of your Git repository.
3. Using your favorite text editor, open the file *.git/info/exclude*.

## Further Reading

* [Ignoring files](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository#_ignoring) in the Pro Git book
* [.gitignore](https://git-scm.com/docs/gitignore) in the man pages for Git
* [A collection of useful *.gitignore* templates](https://github.com/github/gitignore) in the github/gitignore repository
* [gitignore.io](https://www.gitignore.io/) site
