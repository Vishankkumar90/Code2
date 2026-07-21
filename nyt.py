import flask

app = flask.Flask(__name__) 
@app.route('/nyt')
def nyt():
    return flask.render_template('nyt.html')

if __name__ == '__main__':
    
    app.run(debug=True)

    @app.route('/nyt')
    def nyt():
        return flask.render_template('nyt.html')
    def main():
        app.run(debug=True)
    if __name__ == '__main__':
        main()
        main()
